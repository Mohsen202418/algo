#include<stdio.h>
int main(){
  char M[5][5]= {{'1','2','3','4','5'},
                {'7','a','c','8','d'},
                {'c','9','4','z','8'},
                {'5','6','p','n','3',},
                {'2','9','t','m','k',}};
    /* 1) afficher le matrice */
    for(int i=0 ; i<5 ; i++){
      for (int  j = 0; j<5; i++) {
        printf("%c",M[i][j] ) 
        
      }
      
    } 
}
