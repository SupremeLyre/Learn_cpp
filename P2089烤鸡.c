#include<stdio.h>
int check(int n)
{
    int c = (n>30||n<10);
    return c;
}
int main()
{
    int n;
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&n);
    int tot = 0;
    if(!check(n))
    {
        for(a = 1;a<=3;a++)
            {for(b = 1;b<=3;b++)
                {for(c = 1;c <= 3;c++)
                    {for (d = 1;d<=3;d++)
                        {for(e = 1;e<=3;e++)
                            {for(f = 1;f<=3;f++)
                                {for(g = 1;g<=3;g++)
                                    {for(h = 1;h<=3;h++)
                                        {for(i = 1;i<=3;i++)
                                            {for(j = 1;j<=3;j++)
                                                {if(a+b+c+d+e+f+g+h+i+j == n)
                                                    {
                                                        tot++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }                                
    
        printf("%d\n",tot);
        for(a = 1;a<=3;a++)
            {for(b = 1;b<=3;b++)
                {for(c = 1;c <= 3;c++)
                    {for (d = 1;d<=3;d++)
                        {for(e = 1;e<=3;e++)
                            {for(f = 1;f<=3;f++)
                                {for(g = 1;g<=3;g++)
                                    {for(h = 1;h<=3;h++)
                                        {for(i = 1;i<=3;i++)
                                            {for(j = 1;j<=3;j++)
                                                {if(a+b+c+d+e+f+g+h+i+j == n)
                                                    {
                                                        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
    }
    else
        printf("0");
    return 0;
}