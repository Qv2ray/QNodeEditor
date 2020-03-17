#pragma once

#include <QtCore/QString>
#include <QtCore/QVariant>
#include <functional>

namespace std
{
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
    template<>
    struct hash<QString>
    {
        inline std::size_t operator()(QString const &s) const
        {
            return qHash(s);
        }
    };
#endif
} // namespace std
