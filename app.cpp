#include<iostream>
using namespace std;
int main(){
int i = 1 , j  ,m=1;
int l =3;
int p = 3 ;
int t[p][l];
int s[l*p];
    for(int x = 0 ; x< p; x++){
        for(int y = 0 ; y < l ; y++ ){
    t[x][y] = m ;
    m++ ;
}}
j = l;
bool isbuttom = true ; 
for(int k = 0 ; k < l*p ;k++){
//  i==1 && (l-j)%2 == 0 
    if(((i==1  && ((l-j)%2 == 0 )) || (i==p  && ((l-j)%2 == 0 ) && p%2 == 0 ) || (i==p && ((l-j)%2 != 0 ) && p%2 != 0 ) )&& !( j == l && i == p )&& !(j==1 && i==1)) // ma if ma walo hadi hhh 
    {
    s[k] =t[i-1][j-1] ;
            j--;
    if(i == 1 ){
        isbuttom = true ;
    }
    else{
        isbuttom = false; 
    }
    }
        else if((j==l  && (i%2 ==0)) || ( j==1 && (i%2 ==0) && l%2==0 ) || ( j==1 && (i%2 !=0) && l%2!=0 ) )
        {
            s[k] =t[i-1][j-1] ;
        // s[k] =t[i][j]; 
        // next step 
        i++ ;
        if(j == 1 ){
            isbuttom = true ;
        }
        else{
            isbuttom = false;
	    
        }
        }
            else if( isbuttom ){
                s[k] =t[i-1][j-1];
            //bottomright
           i++ ; j++ ;

            }
            else{
                s[k] = t[i-1][j-1];
     i--;j--;
            }       
}
for(int k = 0 ; k < l*p ;k++){
cout<<s[k]<<"  " ;
}}
