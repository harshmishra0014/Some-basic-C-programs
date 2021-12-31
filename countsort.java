public class countsort
{
    void countSort(int a[],int n,int k)
    {
	    int count[k+1];
	    int b[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
		    count[a[i]]++;	//creating array with frequency
	    }
	    for(i=0;i<k+1;i++)
	    {
	    	count[i]=count[i]+count[i-1];	//creating array with position	
	    }
	    for(i=n-1;i>=0;i--)
	    {
	    	b[--count[a[i]]]=a[i];
	    }
	    for(i=0;i<n;i++)
	    {
		    a[i]=b[i];
	    }
    }
    public static void main(String args[])
    {
	    int n=17;
	    int i;
	    int a[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
	    System.out.print("UNSORTED ARRAY\n");
	    for(i=0;i<n;i++)
    	{
	    	System.out.print("%d ",a[i]);
	    }
	    int k=9;
	    System.out.print("\n\nSORTED ARRAY\n");
	    countSort(a,n,k);
	    System.out.print("\n\nSORTED ARRAY\n");
	    for(i=0;i<n;i++)
	    {
		    System.out.print("%d ",a[i]);
    	}
	    return 0;
    }
}