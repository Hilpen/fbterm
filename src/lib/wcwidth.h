/******************************************************************************
* File:             wcwidth.h
*
* Author:           Hilpen(hilpenwang@gmail.com)
* Created:          07/12/21 
* Description:      An implementation of wcwidth(3) in  according to unicode-
*                   tr11(http://www.unicode.org/unicode/reports/tr11/)
*****************************************************************************/

#ifndef WCWIDTH_H
#define WCWIDTH_H

#include <wchar.h>

int wcwidth(wchar_t usc);

#endif /* ifndef WCWIDTH_H */
