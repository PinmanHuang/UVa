#include <iostream>
#include <cstring>
#include <stdio.h>  // For converting integer into char array -> using sprintf

using namespace std;

int main() {
    cin.tie(0);
    long long origin;
    int data_len = 1;
    while(cin >> origin) {
        char a[16]={};
        sprintf(a, "%lld", origin);
        int len = strlen(a), r[9] = {}, index=0, first=true, have_kuti=false;
        /******************************************************************************************************
         * 1. The number will not bigger than 999999999999999.                                                *
         * 2. Number may start in 0. e.g. 000000000001 -> we could read the number and save in long long type *
         * 3. Divide the number and store in 9 variable, named a. e.g. 1,23,45,6,78,98,76,5,43                         *
         ******************************************************************************************************/
        for(int i = (len-1); i >= 0; i--) {
            if(index==1||index==5||index==8) {
                r[index] = (a[i]-'0');
            } else {
                if(i==0)
                    r[index] = (a[i]-'0');
                else
                    r[index] = (a[i]-'0')+10*(a[i-1]-'0');
                
                i -= 1;
            }
            index += 1;
        }
        /*********************************************************************************************************
        * 4. Need to print with index, and it will contain 4 digits including spaces. e.g. ---1, --1. -111, 1111 *
        **********************************************************************************************************/
        if(data_len>=1 && data_len<10)
            cout << "   " << data_len << ". ";
        else if(data_len>=10 && data_len<100)
            cout << "  " << data_len << ". ";
        else if(data_len>=100 && data_len<1000)
            cout << " " << data_len << ". ";
        else if(data_len>=1000 && data_len<10000)
            cout << data_len << ". ";
        data_len++;
        /*********************************************************************************************************************
        * 5. If the data of a[] which index is higher than 4 exists non-zero data, and a[4] is zero, remember to print kuti. *
        **********************************************************************************************************************/
        for(int i = 8; i >= 0; i--) {
            if(r[i]!=0) {
                if(!first)
                    cout << " ";
                first = false;
                if(i==8||i==4) {
                    cout << r[i] << " kuti";
                    if (i==8)
                        have_kuti = true;
                    else
                        have_kuti = false;
                } else if (i==7||i==3) {
                    if (i==7)
                        have_kuti = true;
                    cout << r[i] << " lakh";
                } else if (i==6||i==2) {
                    if (i==6)
                        have_kuti = true;
                    cout << r[i] << " hajar";
                } else if (i==5||i==1) {
                    if (i==5)
                        have_kuti = true;
                    cout << r[i] << " shata";
                } else {
                    cout << r[i];
                }
            } else {
                if(have_kuti && i==4)
                    cout << " kuti";
            }
        }
        if(first)
            cout << '0';
        cout << '\n';
    }
}