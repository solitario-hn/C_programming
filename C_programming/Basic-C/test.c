#include <stdio.h>
#include <string.h>
//index of smallest and largest array

/*
int main() {
    int count=0;
    for(int i=0;i<9;i++)
    {
        count+=1;
    }
    printf("%d",count);
  return 0;
}
*/

int main(){
    int array[10]={100,200,300,400,500,600,700,800,900,1000};
    int max=0;
    int min=0;
    for(int i=1;i<10;i++){
        if(array[min]>array[i]){
            min=i;
        }
        if(array[max]<array[i]){
            max=i;
        }
    
    }

printf("this is the max value %d,this is the min value %d",max,min);

    
}

