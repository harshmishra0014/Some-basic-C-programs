void printPowerSet(char *set, int l , int h , int size)
{
    int i=l;
    for(i=l;i<=h;i++)
	{
		printf("%c",set[i]);
	}
    printf("n");
     if(l+1 < size){ 
          printPowerSet(set,l+1,h,size); 
     } 
     if(h-1 >= 0 ){
            printPowerSet(set,l,h-1,size);
     }
}
int main(void) {
char set[] = {'a','b','c','d'};
printPowerSet(set,0,3,4 );
return 0;
}
