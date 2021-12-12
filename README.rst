LWTimezonetracker
======================

LWTimezonetracker is a C++ CLI application that allows you to track the timezone of a given
location.

Have you ever lived in a different time zone than your friends and family and wondered what the
time is at their country/state? With this CLI, you never have to wonder again!

Installation
-------------

To install LWTimezonetracker, clone this repository and build the project on your own machine; the
executable will be under the `bin` folder.

Alternatively, you can download the pre-built binaries from the
`releases page <https://github.com/leeway64/LWTimezonetracker/releases>`_.

Usage
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

Refer to the `usage examples <doc/usage_examples.rst>`_ for more information on how to use
LWTimezonetracker.
