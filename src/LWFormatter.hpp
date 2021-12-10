// A subclass for the CLI::Formatter class. This class provides custom formatting for the help
// message.
class LWFormatter : public CLI::Formatter {
public:
    std::string make_description(const CLI::App*) const override
    {
        return "LWTimezontracker: C++ CLI to keep track of the time zones of various locations.\n";
    }
};
