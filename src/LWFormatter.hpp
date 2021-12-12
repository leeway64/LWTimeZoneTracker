// A subclass for the CLI::Formatter class. This class provides custom formatting for the help
// message.
class LWFormatter : public CLI::Formatter {
public:
    // constexpr means the return value is constant and is computed at compile time whenever possible
    constexpr std::string make_description(const CLI::App*) const override
    {
        return "LWTimezontracker: C++ CLI to keep track of the time zones of various locations.\n";
    }

    // Inline tells compiler to insert function body into wherever the function is called
    inline std::string make_usage(const CLI::App*, std::string name) const override
    {
        return "LWTimezonetracker [OPTIONS]";
    }

};
