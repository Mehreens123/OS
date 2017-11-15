#iclude<stdio>
#nclude<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


Int main()
{
	int str[100] = {1,2,3,4,.....,100}
	int array[4];
	FILE *f;
	f = fopen("input.txt" , "w");
	FILE *f1;
	f1 = fopen("output.txt", "r");

	int i,j,status 
	int sum = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int bigsum = 0;
	
	int pid1;

	for(i = 0; i<=3, i++)
	{
	    pid1 = fork();
	    if(pid1 < 0)
	    {
		printf("child process is not created");
	    }
	    else if(pid1 == 0)
	    {
		if(j==0)
		{
		     int m;
		     for(m=0; m<25; m++)
		     {
			sum = sum + str[m];
		     }
		     fprintf(f, "%dn" , sum);
		     exit(0);
		 }
	     }
	     else if(j==1)
	     {
		int n;
		for(n = 25; n<50; n++)
		{
		      sum2 = sum2+str[n];
		}
		fprintf(f,"%d\n", sum2);
		exit(0);
	     }
	     else if(j ==2)
	     {
		int h;
		for(h = 50; h<75; h++)
		{
		      sum3 = sum3+str[h];
		}
		fprintf(f,"%d\n", sum3);
		exit(0);
	      }
	       else if(j ==3)
	     {
		int e;
		for(e = 75; e<100; e++)
		{
		      sum4 = sum4+str[e];
		}
		fprintf(f,"%d\n", sum4);
		exit(0);
	      }
	}

	else
	{
	   wait(& status);
	}	
	

        int bs;
	for(bs = 0; bs <4; bs++)
	{
	   fscanf(f1, "%d\n", &array[bs];
	}
	for(bs = 0; bs <4; bs++)
	{
	   bigsum = bigsum +array[bs];
	}
	printf("Sum is:%d", bigsum);

	fclose(f);
	fclose(f1);
	return 0;
}


	
