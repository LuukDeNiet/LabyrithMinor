#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t592;
// System.Int32[]
struct Int32U5BU5D_t370;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// System.Text.RegularExpressions.ReplacementEvaluator
struct  ReplacementEvaluator_t935  : public Object_t
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.ReplacementEvaluator::regex
	Regex_t592 * ___regex_0;
	// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::n_pieces
	int32_t ___n_pieces_1;
	// System.Int32[] System.Text.RegularExpressions.ReplacementEvaluator::pieces
	Int32U5BU5D_t370* ___pieces_2;
	// System.String System.Text.RegularExpressions.ReplacementEvaluator::replacement
	String_t* ___replacement_3;
};
