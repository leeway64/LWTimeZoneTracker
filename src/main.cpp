#include <iostream>
#include <chrono>
#include <algorithm>
#include <CLI/CLI.hpp>

#include "LWFormatter.hpp"


int main(int argc, char** argv) {
    const std::string locations_file_name = "list_of_locations.yaml";

    const std::filesystem::path timers_file{ locations_file_name };
    if (!std::filesystem::exists(timers_file))
    {
        std::ofstream output(locations_file_name);
        //output << "{\n}\n";
        output.close();
    }

	CLI::App app{ "LWTimezonetracker" };

	app.formatter(std::make_shared<LWFormatter>());  // Custom formatting for help message

    std::string enter_location = "";
    app.add_option("-e", enter_location, "Enter a location");

    bool view_all_locations{ false };
    app.add_flag("-va", view_all_locations, "View all locations");

    bool view_all_tz{};
    app.add_flag("-vtz", view_all_tz, "View all time zones");

    std::string remove_location = "";
    app.add_option("-r", remove_location, "Remove a location");

    try {
        app.parse(argc, argv);
    }
    catch (const CLI::ParseError& e) {
        return app.exit(e);
    }

    const auto& tz_database{ std::chrono::get_tzdb() };

    if (enter_location != "")
    {
        std::string time_zone{};
        std::cout << "Enter time zone of " << enter_location << ": " << std::endl;
        std::cin >> time_zone;

        bool found{ false };
        for (const auto& timezone : tz_database.zones)
        {
            
        }

        if (!found)
        {
            std::cout << "Timezone was not found" << std::endl;
        }
    }

    if (view_all_locations)
    {
        std::cout << "viewing all" << std::endl;
    }

    if (view_all_tz)
    {

    }

    if (remove_location != "")
    {
        std::cout << remove_location << " has been removed" << std::endl;
    }

	return 0;
}
