void main()
{
	float m,p,c,total,avg;
	
	printf("\nenter any three numbers\n");
	scanf("%f %f %f",&m, &p, &c);
	if(m>=40 && p>=40 && c>=40)
	{
		total=m+p+c;
		avg=total/3;
		
		if(avg>=70)
			printf("distinction");
		else if(avg>=60 && avg<70)
			printf("first class");
		else if(avg>=50 && avg<60)
			printf("second class");
		else 
			printf("third class");
	}
	else
		printf("fail");
}
