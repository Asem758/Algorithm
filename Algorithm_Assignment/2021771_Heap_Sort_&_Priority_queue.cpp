#include<iostream>
using namespace std;

void insert(int);
int hight_r(void);
void d_heap(int);
void u_heap(int);
void heap_Sort(struct numbers*);
int *heap_Arr;
int N=0;


int main()
{
    int i;
    struct numbers vals = int Randoms_vals(0, 300);
    heap_Sort(&vals);

    for (i=0; i<vals.size; i++)
      cout << vals.values[i] <<endl;
      cout <<"\n";
      return 0;
}

void insert(int number_of_p)
{
    heap_Arr[++N] = number_of_p;
    u_heap(N);
}

int hight_r(void)
{
    int z = heap_Arr[1];
    heap_Arr[1] = heap_Arr[N--];
    d_heap(1);
    return z;
}
void d_heap(int k)
{
    int j, z;
    z = heap_Arr[k];

    while (k <= N/2)
    {
        j = k+k;
        if (j < N && heap_Arr[j] < heap_Arr[j+1])
        j++;
        if (z >= heap_Arr[j])
        break;
        heap_Arr[k] = heap_Arr[j];
        k = j;
    }
    heap_Arr[k] = z;
}

void u_heap(int k)
{
    int z;
    z = heap_Arr[k];
    while (heap_Arr[k/2] <= z)
    {
        heap_Arr[k] = heap_Arr[k/2];
        k = k/2;
    }
    heap_Arr[k] = z;
}

void heap_Sort(struct numbers *vals)
{

    heap_Arr = malloc(vals->size * sizeof(int) + 1);
    int max=0;
    int i=0;

    for (i = 0; i < vals->size; i++)
    {
        max = (vals->values[i] > max) ? vals->values[i] : max;
    }
    heap_Arr[0] = max+1;


    for (i = 0; i < vals->size; i++)
    {
        insert(vals->values[i]);
    }

    while (i--)
    {
        vals->values[i] = hight_r();
    }

    free(heap_Arr);
}
