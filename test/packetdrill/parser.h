/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ELLIPSIS = 258,
    SA_FAMILY = 259,
    SIN_PORT = 260,
    SIN_ADDR = 261,
    _HTONS_ = 262,
    INET_ADDR = 263,
    INET6_ADDR = 264,
    MSG_NAME = 265,
    MSG_IOV = 266,
    MSG_FLAGS = 267,
    MSG_CONTROL = 268,
    CMSG_LEVEL = 269,
    CMSG_TYPE = 270,
    CMSG_DATA = 271,
    FD = 272,
    EVENTS = 273,
    REVENTS = 274,
    ONOFF = 275,
    LINGER = 276,
    U32 = 277,
    U64 = 278,
    PTR = 279,
    ACK = 280,
    ECR = 281,
    EOL = 282,
    MSS = 283,
    NOP = 284,
    SACK = 285,
    SACKOK = 286,
    TIMESTAMP = 287,
    VAL = 288,
    WIN = 289,
    WSCALE = 290,
    URG = 291,
    MD5 = 292,
    FAST_OPEN = 293,
    FAST_OPEN_EXP = 294,
    TOS = 295,
    FLAGS = 296,
    FLOWLABEL = 297,
    ECT0 = 298,
    ECT1 = 299,
    CE = 300,
    ECT01 = 301,
    NO_ECN = 302,
    IPV4 = 303,
    IPV6 = 304,
    ICMP = 305,
    UDP = 306,
    RAW = 307,
    GRE = 308,
    MTU = 309,
    ID = 310,
    MPLS = 311,
    LABEL = 312,
    TC = 313,
    TTL = 314,
    OPTION = 315,
    SUM = 316,
    OFF = 317,
    KEY = 318,
    SEQ = 319,
    NONE = 320,
    CHECKSUM = 321,
    SEQUENCE = 322,
    PRESENT = 323,
    EE_ERRNO = 324,
    EE_CODE = 325,
    EE_DATA = 326,
    EE_INFO = 327,
    EE_ORIGIN = 328,
    EE_TYPE = 329,
    SCM_SEC = 330,
    SCM_NSEC = 331,
    FLOAT = 332,
    INTEGER = 333,
    HEX_INTEGER = 334,
    WORD = 335,
    STRING = 336,
    BACK_QUOTED = 337,
    CODE = 338,
    IPV4_ADDR = 339,
    IPV6_ADDR = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 490 "parser.y" /* yacc.c:1909  */

	s64 integer;
	double floating;
	char *string;
	char *reserved;
	s64 time_usecs;
	enum direction_t direction;
	enum ip_ecn_t ip_ecn;
	struct tos_spec tos_spec;
	struct ip_info ip_info;
	struct mpls_stack *mpls_stack;
	struct mpls mpls_stack_entry;
	u16 port;
	s32 window;
	u16 urg_ptr;
	u32 sequence_number;
	struct {
		int protocol;		/* IPPROTO_TCP or IPPROTO_UDP */
		u32 start_sequence;
		u16 payload_bytes;
	} tcp_sequence_info;
	struct option_list *option;
	struct event *event;
	struct packet *packet;
	struct syscall_spec *syscall;
	struct command_spec *command;
	struct code_spec *code;
	struct tcp_option *tcp_option;
	struct tcp_options *tcp_options;
	struct expression *expression;
	struct expression_list *expression_list;
	struct errno_spec *errno_info;
	struct {
		u16 src_port;
		u16 dst_port;
	} port_info;

#line 178 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
