#include <vector>
using namespace std;

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map)
{
    vector<int> answer;
    if (snail_map.size() == 0)
        return answer;
    if (snail_map.size() == 1)
    {
        answer.push_back(snail_map[0][0]);
        return answer;
    }

    int n = snail_map.size();
    int limitcnt = 0;
    int i, j;
    while (n > 0)
    {
        //go right endofodd 3:2,2 5:3,3 7: 4,4  idx 1,1 2,2, 3,3
        {
            i = 0 + limitcnt;
            for (j = 0 + limitcnt; j < n - limitcnt; j++)
                answer.push_back(snail_map[i][j]);
            if ((n / 2 + 1) - 1 == i && i == j)
                break;
        }

        //go down
        {
            j = n - limitcnt - 1;
            for (i = 0 + limitcnt + 1; i < n - limitcnt; i++)
                answer.push_back(snail_map[i][j]);
        }

        //go left   endofeven   2: 1,2 4: 2,3  6: 3,4 8: 4,5    idx 0,1 1,2  2,3  3,4
        {
            i = n - limitcnt - 1;
            for (j = n - limitcnt - 1 - 1; j >= 0 + limitcnt; j--)
                answer.push_back(snail_map[i][j]);
            if ((n / 2) - 1 == i && i + 1 == j)
                break;
        }

        //go up
        {
            j = 0 + limitcnt;
            for (i = n - limitcnt - 1 - 1; i >= 0 + limitcnt + 1; i--)
                answer.push_back(snail_map[i][j]);
        }

        limitcnt++;
    }

    return answer;
}