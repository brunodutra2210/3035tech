m=int(input("Digite o Mês: "))
d=int(input("Digite o Dia: "))
a=int(input("Digite o Ano: "))
dias=['Sábado','Domingo','Segunda-feira','Terça-feira','Quarta-feira','Quinta-feira','Sexta-feira']

if(m==1):
    m=13
    a=a-1
if(m==2):
    m=14
    a=a-1
k=d+(2*m)+(3*((m+1)/5))+a+(a/4)-(a/100)+(a/400)+2
s=int(k%7)
print(dias[s])
