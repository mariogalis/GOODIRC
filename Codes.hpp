#ifndef CODES_HPP
# define CODES_HPP

// CLIENT-SERVER						000 - 099
# define    RPL_NONE                    "000"
# define	RPL_WELCOME					"001"

// -- COMMAND RESPONSES					200 - 399
# define    RPL_TRACENEWTYPE            "208"
# define	RPL_USERHOST				"302"
# define	RPL_TOPIC					"332"
# define	RPL_NAMREPLY				"353"
# define	RPL_ENDOFNAMES				"366"

// -- ERRORS							400 - 599
# define	ERR_UNKNOWNERROR			"400"
# define	ERR_NOSUCHNICK				"401"
# define	ERR_NOSUCHCHANNEL			"403"
# define	ERR_CANNOTSENDTOCHAN		"404"
# define	ERR_UNKNOWNCOMMAND			"421"
# define	ERR_ERRONEUSNICKNAME		"432"
# define	ERR_NICKNAMEINUSE			"433"
# define	ERR_NOTREGISTERED			"451"
# define	ERR_NEEDMOREPARAMS			"461"
# define	ERR_ALREADYREGISTERED		"462"
# define	ERR_PASSWDMISMATCH			"464"
# define	ERR_CHANNELISFULL			"471"
# define	ERR_UNKNOWNMODE				"472"
# define	ERR_INVITEONLYCHAN			"473"
# define	ERR_NOPRIVILEGES			"481"
# define	ERR_CHANOPRIVSNEEDED		"482"
# define	ERR_UMODEUNKNOWNFLAG		"501"


#endif
