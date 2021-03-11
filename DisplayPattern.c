
/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
Output :   *    #   *   #   *   #
 
 Input :      9
 Output :   *   #   *   #   *   #   *   #   *
 
 */

/*
        iNo -> 6

_____________________________________
Loop            1   2   3    4   5   6    7   8   9
_____________________________________
Output         *   #   *   #   *   #   *   #   *
_____________________________________
  
 Concllusion
 
    Even loop counter -> #
    Odd loop conunter -> *
 
 */

#include<stdio.h>

void Pattern(int iValue)
{
  int iCnt = 0;
  
  if(iValue < 0)
  { 
    iValue = -iValue;
  }
  
  for(iCnt = 1; iCnt <= iValue; iCnt++)
  {
	  if(iCnt % 2 == 0)
	  {
        printf("# \t");
	  }
	  else
	  {
		   printf("* \t ");
	  }
   }
}

#include<stdio.h>

int main()
{
 int no = 0;
 
 printf("Enter The Number\n");
 scanf("%d",&no);
 
 Pattern(no);


return 0;
}


/*
D:\ProgramTopicWise\LB\PatternPrinting\Pattern4>myexe
Enter The Number
6
*        #      *        #      *        #
D:\ProgramTopicWise\LB\PatternPrinting\Pattern4>myexe
Enter The Number
8
*        #      *        #      *        #      *        #

*/