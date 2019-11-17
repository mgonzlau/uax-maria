#include <string.h>
class Coche
{
	/*! Posibles estados del coche */
	enum status {
		_status_ok, /*!< Situación normal */
		_status_broken, /*!< El coche debe ir al taller */
		_status_repairing, /*!< El coche está siendo reparado en el taller*/
		_status_ready /*!< El coche ha sido reparado y el dueño puede recogerlo */
	};
	
	private:
	std::string _license;
	status _status;
	unsigned int price;
	public:
	Coche( std::string license );
	virtual ~Coche(void);
	int getPrice();
	// status methods
	bool isOk();
	void toggleOk();
	bool isBroken();
	void toggleBroken();
	bool isRepairing();
	void toggleRepairing();
	bool isReady();
	void toggleReady();

};