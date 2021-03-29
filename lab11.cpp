#include <iostream>
using namespace std;
struct point
{
    int key;
    point* next;
};
point* make_point(int n)
{
    point* first, * p;
    first = NULL;
    for (int i = n; i >= 1; i--)
    {
        p = new(point);
        p->key = i;
        p->next = first;
        first = p;
    }
    return first;
}
point* print_point(point* first)
{
    if (first == NULL)return NULL;
    point* p = first;
    while (p != NULL)
    {
        cout << p->key << " ";
        p = p->next;
    }
    return first;
}
point* del_point(point* beg, int k)
{
    point* p = beg;
    if (k == 0)
    {
        beg = beg->next;
        delete p;
        return beg;
    }
    for (int i = 1; i < k && p->next != 0; i++)
        p = p->next;
    if (p->next == 0) return beg;
    point* r = p->next;
    p->next = r->next;
    delete r;
    return beg;
}
point* add_point(point* beg, int k)
{
    point* p = beg;
    point* New = new(point);
    cout << "\nвведите номер элемента, который нужно добавить ";
    cin >> New->key;
    if (k == 0)
    {
        New->next = beg;
        beg = New;
        return beg;
    }
    for (int i = 0; i < k - 1 && p != 0; i++)
        p = p->next;
    if (p != 0)
    {
        New->next = p->next;
        p->next = New;
    }
    return beg;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, n, k, l, e;
    point* q = NULL;
    cout << "введите количество элементов в списке ";
    cin >> n;
    q = make_point(n);
    print_point(q);
    cout << "\nвведите номер элемента, который нужно удалить ";
    cin >> l;
    del_point(q, l - 1);
    print_point(q);
    add_point(q, 1);
    print_point(q);
}