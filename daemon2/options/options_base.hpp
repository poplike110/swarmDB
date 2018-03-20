// Copyright (C) 2018 Bluzelle
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License, version 3,
// as published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <include/bluzelle.hpp>
#include <string>


namespace bzn
{
    class options_base
    {
    public:

        virtual ~options_base() = default;

        /**
         * Get the address and port for the node to listen on
         * @return endpoint
         */
        virtual boost::asio::ip::tcp::endpoint get_listener() const = 0;

        /**
         * Get the Ethererum address the node will be using
         * @return address
         */
        virtual std::string get_ethererum_address() const = 0;
    };

} // bzn
