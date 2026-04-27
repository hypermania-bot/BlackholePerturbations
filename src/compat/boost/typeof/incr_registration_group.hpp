// Compatibility shim for the trimmed Boost tree vendored in external/.
// Boost.Typeof includes this file without an include guard to advance a
// registration-group macro. The codebase uses C++20/decltype paths, so a
// stable fallback group is sufficient for the Odeint/Units headers used here.
#ifndef BOOST_TYPEOF_REGISTRATION_GROUP
#define BOOST_TYPEOF_REGISTRATION_GROUP 0
#else
#undef BOOST_TYPEOF_REGISTRATION_GROUP
#define BOOST_TYPEOF_REGISTRATION_GROUP 1
#endif
