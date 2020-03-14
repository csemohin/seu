 #include<stdio.h>
 #include<math.h>
 int main()
 {
    double a, b;
    scanf("%lf %lf", &a,&b);
    double c = a / b;
    int  result = ceil(c);
    printf("%d\n", result);
    return 0;
 }
