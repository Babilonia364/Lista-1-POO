public class Banco
{
	private String nome;
	private int quantidade;
	private int[] conta;
	
	public Banco(String nome, int quantidade)
	{
		this.nome=nome;
		this.quantidade=quantidade;
		conta = new int[quantidade];
	}
	
	public void Buscar(int conta)
	{
		int i;
		for(i=0; i<quantidade; i++)
		{
			if(this.conta[i]==conta)
			{
				System.out.println("PARABAINS, achou a conta, o índice dela é: " + i);
				System.out.println("Sua conta é: " + this.conta[i]);
			}else
			{
				System.out.println("(Continue a tentar). Dory.");
			}
		}
	}
	
	public void setConta(int i, int num)
	{
		this.conta[i]=num;
	}
	
	public int getConta(int i)
	{
		return this.conta[i];
	}
	
	/*public void addConta()
	{
		
	}*/
}

public class Main
{
	public static void main(String[] args)
	{
		Banco Xablau = new Banco("Xablau do nordeste", 5);
		Xablau.addConta();
		int xablinha;
		xablinha=Xablau.getConta(6);
		System.out.println("Sua conta é: " + xablinha);
	}
}