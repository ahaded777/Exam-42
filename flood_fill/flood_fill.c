typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void  fill(char **tab, t_point size, t_point begin, char to_fill)
{
    if (begin.y < 0 || begin.x < 0 || begin.y >= size.y || begin.x >= size.x || tab[begin.y][begin.x] != to_fill)
        return ;
    tab[begin.y][begin.x] = 'F';
    fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
    fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
    fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
    fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}