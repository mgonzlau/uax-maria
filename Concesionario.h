
#include "Coche.h"
#include "Cliente.h"
class Concesionario
{
	private:
	std::vector< Coche* > _stock;
	std::vector< Coche* > _repairing;
	public:
	Concesionario(void);
	~Concesionario(void);
	
	/*!
	\brief Añade un nuevo coche al inventario
	@returns false si el coche ya estaba en el inventario o en el
	taller
	*/
	bool addCarToStock( Coche* car )
	{
		if( searchCarStock( car->getLicense() ) == NULL )
		{
		// el coche no está en el stock, lo añado
		_stock.push_back( car );
		return true;
		}
		// el coche ya estaba en el stock
		return false;
	}
	
	/*!
	\brief Vende un coche del inventario al usuario y lo añade a
	su lista de coches
	Tras ejecutar esta función se quita el coche del inventario
	@returns false si el coche no está en inventario o el cliente
	no puede pagarlo
	*/
	bool sellCar( Cliente* client, std::string license ){
		
		Coche* borrable = NULL;
		
		if( ( borrable = searchCarStock( car->getLicense() ) ) != NULL )
		{
			// el coche está el inventario, lo borro
			std::vector< Coche* >::iterator position = std::find(
			_stock.begin(), _stock.end(), borrable );
			_stock.erase( position );
			push_back(borrable);
			client(borrable);
			return true;
		}
		// no se encontró el coche
		return false;
	}
	
	/*!
	\brief Toma un coche averiado del cliente y lo añade al taller
	@returns false si el cliente no tiene ese coche o el coche no
	está averiado
	*/
	bool checkCarInGarage( Cliente* client, std::string license ){
		
		std::vector< Cliente* >::iterator search_pos = _client.begin();
		while( search_pos != _client.end() )
		{
			
			if( (*search_pos)->getLicense() == license) {
			
				if ((*search_pos)->isBroken() == _status._status_broken){
					
					_repairing.erase( *search_pos );
					
				}
				return NULL;
			
			}
			return NULL;
				
		}
		return NULL;
	
	}
	
	/*!
	\brief Toma un coche listo del taller y se lo devuelve al
	cliente
	@returns false si el coche no está en el taller y en estado de
	listo
	*/
	bool retrieveCarFromGarage( Cliente* cliente, std::string license );
	
};