// #include<stdio.h>

// int main(){ 
//     // char ch[] = {'R', 'u', 'b', 'a', 'i', '\0'};
//     // char st[] = "Das";
//     // char *ch1 = ch;
//     // while (*ch1 != '\0')
//     // {
//     //     printf("%c", *ch1);
//     //     ch1++;
//     // }
//     // printf("\n");
//     // char *st1 = st;
//     // while (*st1 != '\0')
//     // {
//     //     printf("%c", *st1);
//     //     st1++;
//     // }
//     // char st[20];
//     // printf("Enterthe name: ");
//     // scanf("%s", st);
//     // printf("%s", st);
//     // char ch[30];
//     // gets(ch);
//     // puts(ch);
//     // printf("%s", ch);
//     // puts(ch);  
//     return 0;
// }

// Quick quiz 01:
// #include<stdio.h>

// int main(){ 
//     char ch[20] = "Bauria";
//     char *str = ch;
//     while (*str != '\0') {
//         printf("%c", *str);
//         str++;
//     }
//     return 0;
// }

// Practice Set 02:
// #include<stdio.h>

// int main(){ 
//     char *ch1;
//     char *ch2;
//     printf("Enter the string: ");
//     scanf("%s", ch1);
//     printf("%s", ch1);
//     printf("Enter the character wise : ");
//     while (*ch2 != '\n')
//     {
//         scanf("%c", ch2);
//         ch2++;
//     }
    
//     printf("%s", ch2);
//     return 0;
// }

//Practice Set 03:
// #include<stdio.h>
// int strleng(char *ch);

// int main(){ 
//     char ch[20] = "Hello";
//     int ans = strleng(ch);
//     printf("The length of the striing is %d", ans);
//     return 0;
// }
// int strleng(char *ch) {
//     int length = 0;
//     while (*ch != '\0')
//     {
//         length++;
//         ch++;
//     }
//     return length;
// }

// Pracctice Set 03:
// #include<stdio.h>
// void fun(char *ch);

// int main(){ 
//     char ch[] = "I lived in Bauria Das Para";
//     puts(ch);
//     fun(ch);
//     puts(ch);
//     return 0;
// }
// void fun(char *ch){
//     while (*ch != '\0')
//     {
//         *ch = *ch + 1;
//         ch++;
//     }
//     printf("%s", ch);
// }

// Practice Set 03:
// #include<stdio.h>
// void fun(char *ch);

// int main(){ 
//     char ch[] = "J!mjwfe!jo!Cbvsjb!Ebt!Qbsb";
//     puts(ch);
//     fun(ch);
//     puts(ch);
//     return 0;
// }
// void fun(char *ch){
//     while (*ch != '\0')
//     {
//         *ch = *ch - 1;
//         ch++;
//     }
//     printf("%s", ch);
// }

//Practice Set 