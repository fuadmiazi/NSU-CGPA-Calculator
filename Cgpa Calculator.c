#include<stdio.h>
#include<string.h>
typedef struct {
    char name[20],grade[5];
    int credit;
}cg;
//int cgIndividual;
int cgIndividual()
{

system("CLS");
    int i,n,s1=0;
    float s2=0.00,CGPA;
    printf("Number of total courses: ");
    scanf("%d",&n);
    cg a[n];
    printf("\nGRADE SHOULD BE LIKE: A+,B-,C+ Or, a-,f,b+\n\n");

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the name of No.%d course: ",i+1);
        gets(a[i].name);
        printf("Credit Hours: ");
        scanf("%d",&a[i].credit);
        if(a[i].credit!=1 && a[i].credit!=3)
        {
            system("CLS");
            printf("Credit should be either 3 or 1!!!\n\n");
            main();
        }
        fflush(stdin);
        printf("Grade: ");
        gets(a[i].grade);
    }
    for(i=0;i<n;i++){
            if(strcmpi(a[i].grade,"A")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(4.00*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"A-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.0*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.0*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"D+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"D")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.0*a[i].credit);
            }
            else
            {
                s1= s1+ a[i].credit;
                s2= s2+(0.0*a[i].credit);
            }
    }
   // printf("credit : %d, cg: %f",s1,s2);
    system("CLS");
    CGPA=s2/s1;
    for(i=0;i<n;i++)
    {
        printf("\n\t\tNo: %d.Course : %s\t\tGrade: %s\n",i+1,a[i].name,a[i].grade);
    }
    printf("\t\t-----------------------------------------");
    printf("\n\t\tTotal CGPA: %.2f\n\t\tTotal Credit Passed: %d\n",CGPA,s1);
    int x;
    printf("\n\t\tTO CHECK AGAIN PRESS 1 OR PRESS 2 TO EXIT: ");
    scanf("%d",&x);
    if(x==1)
        main();
    else
    {
        system("CLS");
        printf("\t\t\t\t----------\n");
        printf("\t\t\t\tThank you!\n");
        printf("\t\t\t\t----------\n");
    }

}
int main()
{
    int z,passedcrdt;
    float currentcgpa,multi1;
    printf("Press: |1| If you want to check your Individual Semester's CGPA \n or \nPress: |2| If you want to check your All Semester's CGPA:\n");
    scanf("%d",&z);
    if(z==1)
    cgIndividual();
    else
    {
        printf("\nEnter your current CGPA:");
        scanf("%f",&currentcgpa);
        printf("Enter how many credits have passed:");
        scanf("%d",&passedcrdt);
        multi1=currentcgpa*passedcrdt;

        system("CLS");

        int i,n,s1=0;
    float s2=0.00,CGPA;
    printf("Number of total courses: ");
    scanf("%d",&n);
    cg a[n];
    printf("\nGRADE SHOULD BE LIKE: A+,B-,C+ Or, a-,f,b+\n\n");

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the name of No.%d course: ",i+1);
        gets(a[i].name);
        printf("Credit Hours: ");
        scanf("%d",&a[i].credit);
        if(a[i].credit!=1 && a[i].credit!=3)
        {
            system("CLS");
            printf("Credit should be either 3 or 1!!!\n\n");
            main();
        }
        fflush(stdin);
        printf("Grade: ");
        gets(a[i].grade);
    }
    for(i=0;i<n;i++){
            if(strcmpi(a[i].grade,"A")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(4.00*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"A-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(3.0*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"B-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(2.0*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"C-")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.7*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"D+")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.3*a[i].credit);
            }
            else if(strcmpi(a[i].grade,"D")==0)
            {
                s1= s1+ a[i].credit;
                s2= s2+(1.0*a[i].credit);
            }
            else
            {
                s1= s1+ a[i].credit;
                s2= s2+(0.0*a[i].credit);
            }

    }
    //printf("%d %f",s1,s2);


    int totalpassedcredit;
    float multi2,CGPAfinal;
    totalpassedcredit = s1+passedcrdt;
    multi2 = s2+multi1;
    CGPAfinal = multi2/totalpassedcredit;

    for(i=0;i<n;i++)
    {
        printf("\n\t\tNo: %d.Course : %s\t\tGrade: %s\n",i+1,a[i].name,a[i].grade);
    }
    printf("\t\t-----------------------------------------");
    printf("\n\t\tTotal CGPA: %.2f\n\t\tTotal Credit Passed: %d\n",CGPAfinal,totalpassedcredit);
    int x;
    printf("\n\t\tTO CHECK AGAIN PRESS 1 OR PRESS 2 TO EXIT: ");
    scanf("%d",&x);
    if(x==1)
        main();
    else
    {
        system("CLS");
        printf("\t\t\t\t----------\n");
        printf("\t\t\t\tThank you!\n");
        printf("\t\t\t\t----------\n");
    }

//    printf("Final CGPA: %.2f",CGPAfinal);

    }



}
