#include <stdio.h>

int main(void)
{
    char ch;

    printf("Input characters:");        //输入提示
    ch = getchar();                     //input the first character
    while(ch != '\n'){                  //输入为回车时结束
        if(ch >= 'A' && ch <= 'Z')      //大写字母时
            ch = ch - 'A' + 'a';
        else if(ch >= 'a' && ch <= 'z') //小写字母时
            ch = ch - 'a' + 'A';
        putchar(ch);                    //输出转换后的字符
        ch = getchar();                 //读入下一个字符
    }

    return 0;
}

/*一下代码段可以替换上述代码中的循环部分*/

while((ch = getchar()) != '\n'){
    if(ch >= 'A' && ch <= 'Z')     
        ch = ch - 'A' + 'a';
    else if(ch >= 'a' && ch <= 'z') 
        ch = ch - 'a' + 'A';
    putchar(ch);
}
