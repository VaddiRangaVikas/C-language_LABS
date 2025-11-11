#include<stdio.h>
struct Student{
    int rollno;
    char name[20];
    float cgpa;
    struct Adress{
        int pincode;
        char v[20];
    }addr;
};
// void vikas(struct Student s[],int n){
    // for(int i=0;i<n;i++){
    //     printf("the details of the student  : %d\n",i+1);
    //     printf("Roll no : %d  \n",s[i].rollno);
    //     printf("Name of the student : %s\n",s[i].name);
    //     printf("cgpa  : %.2f\n",s[i].cgpa);
    //     printf("location : %s\n",s[i].addr.v);
    //     printf("pincode : %d\n",s[i].addr.pincode);
    // }

// };
// void vikas1(int rollno ,int n){
//     printf("%d",rollno);

// };
void vikas2(struct Student *s[],int n){
   for(int i=0;i<n;i++){
        printf("the details of the student  : %d\n",i+1);
        printf("Roll no : %d  \n",s[i]->rollno);
        printf("Name of the student : %s\n",s[i]->name);
        printf("cgpa  : %.2f\n",s[i]->cgpa);
        printf("location : %s\n",s[i]->addr.v);
        printf("pincode : %d\n",s[i]->addr.pincode);
    }
};

int main(){
    int n;
    printf("enter the how many students present in a list");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        printf("enter the details of the stduent %d\n",i+1);
        printf("enter the roll number of student :");
        scanf("%d",&s[i].rollno);
        printf("enter the name of the student :");
        scanf("%s",&s[i].name);
        printf("enter the cgpa of the student :");
        scanf("%f",&s[i].cgpa);
        printf("enter the student location :");
        scanf("%s",&s[i].addr.v);
        printf("enter the pincode of the loaction :");
        scanf("%d",&s[i].addr.pincode);
}
    // vikas(s,n);
    // vikas1(s->rollno,n);
    vikas2(s[0],n);

}