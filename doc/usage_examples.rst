Usage Examples
===============

Help
-----

.. code-block::
	
	$ LWTimezonetracker -h

	LWTimezontracker: C++ CLI to keep track of the time zones of various locations.
	LWTimezonetracker [OPTIONS]
	Options:
	  -h,--help                   Print this help message and exit
	  -e TEXT                     Enter a location
	  -v                          View all locations
	  -t                          View all time zones
	  -r TEXT                     Remove a location

Entering a new location
------------------------

.. code-block::

	$ LWTimezonetracker -e "Taipei"

	Enter time zone of Taipei: Asia/Taipei
        Time at Taipei: 2021-12-12 14:05:43.3107495 GMT+8

Showing all locations
----------------------

.. code-block::

	$ LWTimezonetracker -v

	Viewing all locations:
		Kenting: 2021-12-12 14:12:35.7324624 GMT+8
		Los Angeles: 2021-12-11 22:12:35.7344430 PST
		Seoul: 2021-12-12 15:12:35.7350535 GMT+9
		Taipei: 2021-12-12 14:12:35.7355970 GMT+8

Viewing all time zones
-----------------------

.. code-block::
	
	$ LWTimezonetracker -t

	Africa/Abidjan
	Africa/Accra
	Africa/Addis_Ababa
	Africa/Algiers
	Africa/Asmera
	Africa/Bamako
	Africa/Bangui
	Africa/Banjul
	Africa/Bissau
	Africa/Blantyre
	Africa/Brazzaville
	Africa/Bujumbura
	Africa/Cairo
	Africa/Casablanca
	Africa/Ceuta
	Africa/Conakry
	Africa/Dakar
	Africa/Dar_es_Salaam
	Africa/Djibouti
	...

Removing a location
---------------------

.. code-block::

	$ LWTimezonetracker -r "Seoul"
	
	Location Seoul has been removed
