void toggle_bit(int num,int pos)
{
int toggle=num ^ 0x01 << pos;
printf("toggle of %d at %d = %d\n",num,pos,toggle);
}
