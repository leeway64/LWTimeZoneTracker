LWTimezonetracker
===================

.. image:: https://img.shields.io/badge/license-MIT-blue.svg
    :target: LICENSE.txt
    
.. image:: https://img.shields.io/github/v/release/leeway64/LWTimeZoneTracker
   :alt: GitHub release (latest by date)


LWTimezonetracker is a C++ CLI application that allows you to track the time zone of a given
location.

Have you ever lived in a different time zone than your friends and family and wondered what the
time is at their country/state? With this CLI, you never have to wonder again!


Installation
-------------

.. code-block::

    git clone https://github.com/leeway64/LWTimeZoneTracker.git
    cd LWTimeZoneTracker
    cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_MAKE_PROGRAM=ninja -G Ninja -S . -B ./cmake-build-release
    cmake --build ./cmake-build-release --target LWTimeZoneTracker
    

You can add LWTimeZonTracker to your system's path or run it directly from the `bin` folder.

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


Third Party Software
---------------------

- `CMake <https://cmake.org/>`_ (BSD-3-Clause): Build system generator.
- `Conan <https://conan.io/>`_ (MIT License): Package manager.
- `CLI11 <https://github.com/CLIUtils/CLI11>`_ (BSD-3-Clause): Command-line parser.
- `yaml-cpp <https://github.com/jbeder/yaml-cpp>`_ (MIT License): YAML parser.
