class Main{    
	public static void main(String args[])
	{
	//esta deberia funkar
	Singleton conexion1= Singleton.get_instancia(12,145,1234);
	
	//esta no
	Singleton conexion2 = Singleton.get_instancia(13,146,1234);
	
	
	conexion1.get_datos();    
	}
	}

class Singleton
{
    private static Singleton instancia =null;

    public int conexion_id;
    public int conexion_usuario;
    public int conexion_pass;

    private Singleton(int a, int b, int c)
    {
        conexion_id=a;
        conexion_usuario=b;
        conexion_pass=c;
    }
    
    public static Singleton get_instancia(int a, int b, int c)	
	{
    if( instancia == null)
    {
        instancia= new Singleton(a,b,c);
    }
    else
    {
        System.out.println("Ya hay una instancia, no podes crear otra");
    }
    return instancia;
	}
	public void get_datos()
	{	
		if(instancia != null)
    	{
    	System.out.println(conexion_id);
		System.out.println(conexion_usuario);
		System.out.println(conexion_pass);
    	}
	}

}


