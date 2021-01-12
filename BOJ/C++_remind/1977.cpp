/*
 * About
 *
 * Author: 7533ymh@GitHub (ymh7532@icloud.com)
 * Date  : 2021-01-11
 * URL   : https://www.acmicpc.net/problem/1977
 *
 */

#include <bits/stdc++.h>

int main()
{

    int m,n;
    int result[100];
    int num = 0;

    scanf("%d %d", &m, &n);

    for (int i = 1; i*i<=n; i++)
    {
        int check = i*i;
        if (m <= check && check <= n){
            result[num] = check;
            num++;
        }

    }

    if (num == 0)   printf("-1");
    else
    {
        int sum = 0;
        for (int j = 0; j<num; j++){
            sum += result[j];
        }
        printf("%d\n%d",sum, result[0]);
    }
}


/*============================================================================

1. 21������ i*i<=n �� ���־��� ������ 24������ check <= n�� ���� �ʿ䰡 ����. ����, m������ ���� Ȯ���� �ʿ����.
2. �迭�� �������� �ʰ� min,sum�� �̿��Ͽ� Ǯ �� ����

#include <bits/stdc++.h>

int main()
{

    int m,n;
    int sum = 0 , min = 0;

    scanf("%d %d", &m, &n);

    for (int i = 1; i*i<=n; i++)
    {
        if (i*i < m) continue;

        sum += i*i;
        if ( min == 0 ) min = i*i;
    
    }

    if (sum == 0)   printf("-1");
    else printf("%d\n%d",sum, min);
   
    
}
