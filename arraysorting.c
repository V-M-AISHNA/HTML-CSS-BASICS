# include <stdio.h>
void main(){
    int i,j,temp,n,a[100];
    printf("enter the number of elements in your array  \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Entered array is  \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array is \n ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
}