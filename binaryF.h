
/* Esta função recebe dois parametros, sendo 'y' obrigatoriamente
 * um numero de ponto flutuante, um ponteiro 'x' do struct fb que 
 * retorna o valor depois da virgula(ex: 3,14 retornara 3), e o 
 * valor antes da virgula(ex: 3,14 retorna 0,14) para o struct.
*/
//void separa(float y,struct fb *x);

/* Esta função recebe dois parametros, sendo 'y' uma variavel
 * de ponto flutuante tal que n>=2 e um ponteiro do struct 'x'
 * e retorna o valor de final de 'x'. A função retornara um 
 * inteiro que corresponde ao expoente 'n' de (x->valor * 2^n). 
*/
//int expoent(float y,struct fb *x);

/* Esta função recebe como parametro um ponto
 * flutuante de 'y' e um struct fb 'x' e retornara
 * a mantissa.
*/
//void mantissa(float y,struct fb *x);

/* Esta função recebe como parametro um inteiro
 * num>=2 e imprime o valor em binario(base 2)
*/
void convert(int num);

/* Esta função recebe como parametro um numero flutuante 'y' e
 * converte numeros de ponto flutuante para binario(Base 2).
*/
void converteFB(float y);

/* Esta fução recebe como parametro um vetor de inteiro
 * 'x' de tamanho 32, e preenche o vetor.
*/
void preenche(int x[]);

/* Esta fução recebe como parametro um vetor de inteiro
 * 'x' de tamanho 32, e retorna o valor do expoente do Binario.
*/
int expoentBi(int x[]);

/* Esta função recebe como parametro um vetor de inteiro
 * 'x' de tamanho 32, tal que seu expoente não seja 0;
*/
void normalizada(int x[]);

/* Esta função recebe como parametro um vetor de inteiro
 * 'x' de tamanho 32, tal que seu expoente seja 0;
*/
void desNormalizada(int x[]);

