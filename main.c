#include <stdio.h>
int sr = 0;
int per = 0;
#include <stdlib.h>
void quicksort(int *p,int l,int r){
int op,l1,r1,t;
l1 = l;
r1 = r;
op = p[(l+r)/2];
while(l1<=r1){
        sr+=2;
   while(p[l1]< op){
        l1++;
        sr++;
   }
   while(p[r1]>op){
        r1--;
        sr++;
   }
   if(l1<= r1){
        if(l1<r1){
    t = p[l1];
    p[l1]=p[r1];
    p[r1]=t;
    per++;
    l1++;
    r1--;
   }else{
    l1++;
    r1--;
   }
}
}
   if(l<r1){
    quicksort(p,l,r1);
   }
   if(r>l1){
    quicksort(p,l1,r);
   }
}
int main()
{
int i,n;
int *pa;
sr = 0;
per = 0;
scanf("%d",&n);
pa = malloc(n*(sizeof(int)));
for(i =0;i<n;i++){
    scanf("%d",&pa[i]);
}
quicksort(pa,0,n-1);
for(i =0;i<n;i++){
    printf("%d\n",pa[i]);
}
printf("%d %d",sr,per);
    return 0;
}
