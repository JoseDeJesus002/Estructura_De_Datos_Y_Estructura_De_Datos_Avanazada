#ifndef PILA_H
#define PILA_H
namespace pilasavitch
{
	struct PilaEstructurada
	{
		char datos;
		PilaEstructurada *enlace;
	};
	
	typedef PilaEstructurada* PilaEstructuradaPtr;
	
	
	class pila {
	public:
		pila();
		pila(const pila& una_pila);
		~pila();
		void mete(char el_simbolo);
		char saca();
		
		bool vacia() const;
	private:
		PilaEstructuradaPtr superior;
	};
}
#endif

