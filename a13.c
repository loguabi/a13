#include<stdio.h>
int main()
{
char str[50];
scanf("%s",str);
int h=strlen(str)-1,r,count=0,c;
for(r=0;r<=h;r++);
c=str[h];
count++;
}
else if(str[h]==str[r+1])
{
c=str[r];
count++;
}
else {
if(r+1==h-1){
count++;
}
c=str[h];
count++;
}
}
j--;
}
if(count==1)
printf("%c\n",c);
}
else if(count>1)
{
printf("cannot be converted\n");
}
else
{
printf("Already a palindrome\n");
}
return 0;
}
