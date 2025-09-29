#include<stdio.h>
int binary(int a[],int n,int k,int i){
    int l=i+1,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]>k) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;scanf("%d",&target);

    int a1,b;
    for(int i=0;i<n;i++){
        a1=i;
        int y=target-a[i];
        if(binary(a,n,y,i)!=-1){
            b=binary(a,n,y,i);
            break;
        }
    }
    printf("%d %d", a1, b);
}
