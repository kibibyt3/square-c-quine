int printf();;;;;int main(char*s){s=
"int printf();;;;;int main(char*s){s=\n\
?`;;;;;;char a[]={'%','c','%','c','%'\n\
,'c','%','c',0};;;;char b[]={'%','c'\n\
,0};;;;char c[]={'%','c','%','s','%'\n\
,'c',0};;;;;for(int i=0;s[i]!=0;i++)\n\
{if(s[i]==63){printf(b,34);;;;;;for(\n\
int j=0;s[j]!=0;j++){;;;;;;if(s[j]==\n\
0x0A){printf(a,92,'n',92,0x0A);;;;;}\n\
else{printf(b,s[j]);;;;;;}}printf(b,\n\
34);;;;;}else if(s[i]==96){printf(b,\n\
0x0A);;;;;}else{printf(b,s[i]);;;}}}"
;;;;;;char a[]={'%','c','%','c','%'
,'c','%','c',0};;;;char b[]={'%','c'
,0};;;;char c[]={'%','c','%','s','%'
,'c',0};;;;;for(int i=0;s[i]!=0;i++)
{if(s[i]==63){printf(b,34);;;;;;for(
int j=0;s[j]!=0;j++){;;;;;;if(s[j]==
0x0A){printf(a,92,'n',92,0x0A);;;;;}
else{printf(b,s[j]);;;;;;}}printf(b,
34);;;;;}else if(s[i]==96){printf(b,
0x0A);;;;;}else{printf(b,s[i]);;;}}}