using gl.*

TEXSIZE = 64

byte[] bits;

int main(String[] args)
{
  for(i=0; i < TEXSIZE; i++) {
    int r = (i * 0xFF) / TEXSIZE;
    for (j = 0; j < TEXSIZE; j++) {
      bits[index(i,j,0)] = r;
      bits[index(i,j,0)] = (j * 0xFF) / TEXSIZE;
      bits[index(i,j,0)] = ~r;
    }
  }

}