#include<stdio.h>
int i,j,k,l,count=6,c=1,c1=10,c2=1,c3=10,c4=11,c5=0,c6=8,a=0;

void line()  //create a line
{
	for(k=0;k<=2;k++)
	{
		printf("*");
	}
}

void gap() // create space
{
	for(k=0;k<=2;k++)
	{
		printf(" ");
	}
}

void crosstr() // cross triangle top (right)
{
   for(j=10;j>=i;j--)
   {
   	printf(" ");
   }
}

void crosstl() // cross triangle top (left)
{
   for(j=10;j>=i;j--)
   {
   	printf(" ");
   }
}

void crossbr() // cross triangle bottom (right)
{
   for(l=1;l<=i;l++)
   {
   	printf(" ");
   }
}

void crossbl() // bottom triangle  (left)
{
   for(j=1;j<=i;j++)
   {
   	printf(" ");
   }
}

void mida() // Middle part of A
{
   for(l=1;l<=i;l++)
   {
   	if(i>4 && i<7)
   	{
   		printf("**");
	   }
	   else
	   {
	   	printf("  ");
	   }
   }
}

void midb() // Create B
{
 for(l=1;l<=5;l++)
{
	// middle body of B	
  if(i>=0 && i<2 || i>4 && i<7 || i>9 && i<=11)
  {
  	printf("**");
  }
  else
  {
  	printf("  "); // two space
  }
}

for(k=0;k<=2;k++)
{
	if(i>=0 && i<2 || i>4 && i<7 || i>9 && i<=11)
  {
  	printf(" "); // one space
  }
  else
  {
  	printf("*"); 
  }
}
}

void midc()  // middle part of C
{
 for(l=1;l<=5;l++)
 {
 	if(i>=0 && i<2 || i>9 && i<=11)
 	{
 		printf("**");
	 }
	 else{
	 	printf("  ");
	 }
 }
}

void midh()  // middle part of H
{
 for(l=1;l<=5;l++)
 {
 	if(i>4 && i<7)
 	{
 		printf("**");
	 }
	 else{
	 	printf("  ");
	 }
 }
}

void mide()  // middle part of 	E
{
 for(l=1;l<=5;l++)
 {
 	if(i>=0 && i<2 || i>4 && i<7 || i>9 && i<=11)
 	{
 		printf("**");
	 }
	 else{
	 	printf("  ");
	 }
 }
}


void midd()  // creates D
{
 for(l=1;l<=5;l++)
 {
 	if(i>=0 && i<2 || i>9 && i<=11 || l==5)
 	{
 		printf("**");
	 }
	 else
	 {
	 	printf("  "); //two space
	 }
 }
 for(k=0;k<2;k++)
 {
 	if(i>=0 && i<2 || i>9 && i<=11 || l==5)
 	{
 	printf(" "); // one space 
 }
 else
 {
 	printf("*");
 }
}
}

void midf()  // middle part of F
{
 for(l=1;l<=5;l++)
 {
 	if(i>=0 && i<2 || i>4 && i<7)
 	{
 		printf("**");
	 }
	 else{
	 	printf("  ");
	 }
 }
}

void midg()  // middle part of G
{
 for(l=1;l<=5;l++)
 {
 	if(i>=0 && i<2 || i>4 && i<7 && l>=3 && l<=5 || i>=6 && i<=9 && i==5 || i>9 && i<=11)
 	{
 		printf("**");
	 }
	 else{
	 	printf("  ");
	 }
 }
}

void spi()  // creates I
{
 for(l=1;l<=6;l++)
 {
 	if(i>=0 && i<2 || i>=2 && i<=9 && l==3 || i>9 && i<=11)
 	{
 		printf("***");
	 }
	 else{
	 	printf("   ");
	 }
 }
}

void spj()  // create J
{
 for(l=1;l<=6;l++)
 {
 	if(i>=0 && i<2 || i>=2 && i<=9 && l==3 || i>=7 && i<=9 && l==0 || i>9 && i<=11 && l<=3)
 	{
 		printf("***");
	 }
	 else{
	 	printf("   ");
	 }
 }
}

void midk()  // middle part of K
{
 for(l=1;l<=6;l++)
 {
 	if(l==count)
 	{
 		printf("***");
	 }
	 else{
	 	printf("  ");
	 }
 }
 if(i<=5)
 {
 	count--;
 }
 else if(i<=11)
 {
 	count++;
 }
}

void midl()  // creates L
{
 for(l=1;l<=5;l++)
 {
 	if(i>9 && i<=11)
 	{
 		printf("**");
	 }
	 else{
	 	printf("   ");
	 }
 }
}
void midv() // middle part of V
{
 for(j=0;j>=i;j--)
 {
 	printf("  ");
 }
}

void mido() // create O
{
 for(k=0;k<=2;k++)
 {
 	if(i==0 && k<2 || i==1 && k<1 || i==11 && k<2 || i==10 && k<1 )
 	{
 		printf(" ");
 		
	 }
	 else
	 {
	 	printf("*");
	 }
 }
 for(l=0;l<=6;l++)
 {
 	if(i>=0 && i<2 || i>9 && i<=11)
 	{
 		printf("**");
	 }
	 else
	 {
	 	printf("  ");
	 }
 }
 for(k=0;k<=2;k++)
 {
 	if(i==0 && k>0 || i==1 && k>1 || i==11 && k>0 || i==10 && k>1)
 	{
 		printf(" ");
	 }
	 else
	 {
	 	printf("*");
	 }
 }
 
 
}
void midp() //middle part of P
{
	for(l=1;l<=5;l++)
	{
		if(i>=0 && i<2 || i>4 && i<7 || i>=2  &i<=4 && l==5)
		{
			printf("**");
		}
		else
		{
			printf("  ");
		}
	}
}


void spq() // Create Q
{
	for(l=0;l<=11;l++)
	{
		if(i>=0 && i<2 && l<9 || i>=2 && i<9 && l==0 || l==8 && i<10 || i>7 && i<9 && l<9 || i>=9 && i<=11 && l==i)
		{
			printf("**");
		}
		else
		{
			printf("  ");
		}
	}
}

void midr() // middle part of R
{
  for(l=1;l<=5;l++)
  {
  	if(i>=0 && i<2 || i>4 && i<7 || i>=2 &i<=4 && l==5 || i>=7 && i<=11 && l==c4)
  	{
  		printf("**");
	  }
	  else
	  {
	  	printf("  ");
	  }
  }
  if(i>6)
  {
  	c4++;
  }
  else if(c4>5)
  {
  	c4 = 1;
  }
}

void sps() // create S
{
  for(l=1; l<=8; l++)
  {
  	if(i>=0 && i<2 || i>4 && i<7 || i>=2 &i<=4 && l==1 || i>6 && i<=9 && l==8 || i>9 && i<=11)
  	{
  		printf("**");
  		
	  }
	  else
	  {
	  	printf("  ");
	  }
  }
}

void spt() // create T
{
	for(l=0;l<=6;l++)
	{
	if(i>=0 && i<2 || i>=2 && i<=11 && l==3)
	{
		printf("***");
	}
   else
   {
   	printf("   ");
   }
}
}

void midu() // middle part of U
{
  for(l=1;l<=6;l++)
  {
  	if(i>9 && i<=11)
  	{
  		printf("**");
	  }
	  else
	  {
	  	printf("  ");
	  }
  }
}

void midw() // middle part of W
{
 for(j=1;j<=i;j++)
 {
 	printf("  ");
 }
}

void spx() // create X
{
 for(l=0;l<=11;l++)
 {
 	if(l==c || i==c1)
 	{
 		printf("***");
	 }
	 else
	 {
	 	printf("  ");
	 }
 }
 if(i<=4)
 {
 	c++;
 	c1--;
 }
 else if(i<=11)
 {
 	c1++;
 	c--;
 }
}

void spy() // create Y
{
  for(l=0;l<=11;l++)
  {
  	if(l==c2 || l==c3 && i<5)
  	{
  		printf("***");
	  }
	  else
	  {
	  	printf("  ");
	  }
  }
  if(i<=4)
  {
  	c2++;
  	c3--;
  }
  else if(i<=11)
  {
  	c3++;
  }
  if(i>=5)
  {
  	printf(" ");
  }
}

void spz() // create Z
{
 for(l=0;l<=11;l++)
 {
 	if(i>=0 && i<2 || i>9 && i<=11 ||i>=2 && i<=9 && l==c4)
 	{
 		printf("**");
	 }
	 else
	 {
	 	printf("  ");
	 }
 }
 c4=c4-1;
}

int main()
{
	start:
		c=1;c1=10;c2=1;c3=10;c4=11;
		char cc[100];
		printf("\n\n-----------------\n(-: Under world By SMB Corporation :-)\n--------------------\n");
		printf("Enter Name[In Lower Case]: ");
		scanf("%s",&cc);
		
		printf("\n");
		for(i=0;i<=11;i++)
		{
			for(a=0;cc[a]!=NULL;a++)
			{
				if(cc[a]=='a')
				{
					crosstr();line();mida();line();crosstl();gap();
				}
				else if(cc[a]=='b')
				{
					line();midb();gap();
				}
				else if(cc[a]=='c')
				{
					line();midc();gap();
				}
				else if(cc[a]=='d')
				{
					line();midd();gap();
				}
					else if(cc[a]=='e')
				{
					line();mide();gap();
				}
					else if(cc[a]=='f')
				{
					line();midf();gap();
				}
					else if(cc[a]=='g')
				{
					line();midg();gap();
				}
					else if(cc[a]=='h')
				{
					line();midh();line();gap();
				}
					else if(cc[a]=='i')
				{
					spi();gap();
				}
					else if(cc[a]=='j')
				{
					spj();gap();
				}
					else if(cc[a]=='k')
				{
					line();midk();gap();
				}
					else if(cc[a]=='l')
				{
					line();midl();gap();
				}
					else if(cc[a]=='m')
				{
					line();crossbr();line();midv();line();crossbl();line();gap();
				}
					else if(cc[a]=='n')
				{
				     line();crossbr();line();crosstl();line();gap();
				}
					else if(cc[a]=='o')
				{
					mido();gap();
				}
					else if(cc[a]=='p')
				{
					line();midp();gap();
				}
					else if(cc[a]=='q')
				{
					spq();gap();
				}
					else if(cc[a]=='r')
				{
					line();midr();gap();
				}
					else if(cc[a]=='s')
				{
					sps();gap();
				}
					else if(cc[a]=='t')
				{
					spt();gap();
				}
					else if(cc[a]=='u')
				{
				    line();midu();line();gap();
				}
					else if(cc[a]=='v')
				{
					crossbr();line();midv();line();crossbl();gap();
				}
					else if(cc[a]=='w')
				{
					line();crosstr();line();midw();line();crosstl();line();gap();
				}
					else if(cc[a]=='x')
				{
					spx();gap();
				}
					else if(cc[a]=='y')
				{
					spy();gap();
				}
					else if(cc[a]=='z')
				{
					spz();gap();
				}
					else if(cc[a]==' ')
				{
					gap();gap();
				}
			}
			printf("\n");
		}
		printf("_________________________________________________________\nLooping Successfull");
		goto start;
}




















