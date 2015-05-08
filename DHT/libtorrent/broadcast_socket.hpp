/*

Copyright (c) 2007, Arvid Norberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the distribution.
    * Neither the name of the author nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef TORRENT_BROADCAST_SOCKET_HPP_INCLUDED
#define TORRENT_BROADCAST_SOCKET_HPP_INCLUDED

#include "config.hpp"
#include "socket.hpp"
#include "address.hpp"
#include "error_code.hpp"

namespace libtorrent
{

	TORRENT_EXPORT bool is_local(address const& a);
	TORRENT_EXPORT bool is_loopback(address const& addr);
	TORRENT_EXPORT bool is_multicast(address const& addr);
	TORRENT_EXPORT bool is_any(address const& addr);
	TORRENT_EXPORT bool is_teredo(address const& addr);
	TORRENT_EXTRA_EXPORT int cidr_distance(address const& a1, address const& a2);

	// determines if the operating system supports IPv6
	//TORRENT_EXPORT bool supports_ipv6();

	TORRENT_EXTRA_EXPORT int common_bits(unsigned char const* b1
		, unsigned char const* b2, int n);


}
	
#endif
