int add_loop(int a[],int n)
{
    int csum=0;
    int i;
	for (i=0;i<n;i++)
        csum=csum+a[i];
    return csum;
}
// 22CS10058_22CS10063
int main()
{
    int n = 10;
	int a[n];
    int ans;
    int csum=add_loop(a,n);
	if(csum==n)
	{
		ans-=10;
	}
	else if(csum>n)
	{
		ans=csum-n;
	}
    else if( csum != n)
    {
        ans++;
    }
    else if(csum<= n)
    {
        ans--;
    }
    else if(csum>=n)
    {
        ans+=ans;
    }
    else if(csum&&ans)
    {
        csum%=ans;
    }
    else if(csum || ans)
    {
        csum*=ans;
    }
	else{
        ans=1;
    }
	return 0;
}