#include<stdio.h>
#include<string.h>

int zzs(char t[10]) 
{
	if(strcmp(t,"��")==0){return 0;}
    if(strcmp(t,"һ")==0){return 1;}
    if(strcmp(t,"��")==0){return 2;}
    if(strcmp(t,"��")==0){return 3;}
    if(strcmp(t,"��")==0){return 4;}
    if(strcmp(t,"��")==0){return 5;}
    if(strcmp(t,"��")==0){return 6;}
    if(strcmp(t,"��")==0){return 7;}
    if(strcmp(t,"��")==0){return 8;}
    if(strcmp(t,"��")==0){return 9;}
    if(strcmp(t,"ʮ")==0){return 10;}
}

int main()
    {
    char num[11][3] = {"��", "һ", "��", "��", "��", "��", "��", "��", "��", "��", "ʮ"};
    char a1[100],a2[100],a3[100],a4[100];
	scanf("%s %s %s %s",a1,a2,a3,a4);
    char b1[100],b2[100],b3[100],b4[100],b5[100],b6[100],b7[100],b8[100],b9[100],b10[100];
    char c1[100],c2[100],c3[100];
    int d=0,d1=0,d2=0,d3=0, e;
    d1=zzs(a4);
    d=d+d1;
    while(1) {
    	scanf("%s", c1);
    	if (strcmp(c1,"����")) { // ������ ���� 
    		scanf(" %s %s", c2,c3);
    		if(strcmp(c2,"����")==0) {
			    d2=zzs(c3);
			    d=d-d2;
			} else if (strcmp(c2,"����")==0) {   
				d3=zzs(c3);
	            d=d+d3;
			}	
		} else { // ���� ���� 
			scanf(" %s", c2);
			break;
		}      
    } 
    scanf("%s %s %s %s %s %s %s %s %s %s",b1,b2,b3,b4,b5,b6,b7,b8,b9,b10);
	e=zzs(b4);
	printf("%s\n", num[d]);
    int len1=strlen(b7);
    int len2=strlen(b10); 
    if(d>e)
        for (int i=1;i<len1-1; i=i+2) 
        {
            
            printf("%c%c",b7[i],b7[i+1]);
        }
    else
        for (int i=1;i<len2-1;i=i+2) 
        {
        
            printf("%c%c",b10[i],b10[i+1]);
        }
}
