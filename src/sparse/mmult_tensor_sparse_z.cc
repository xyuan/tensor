// -*- mode: c++; fill-column: 80; c-basic-offset: 2; indent-tabs-mode: nil -*-
/*
    Copyright (c) 2010 Juan Jose Garcia Ripoll

    Tensor is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published
    by the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Library General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include <tensor/sparse.h>

namespace tensor {

#include "mmult_tensor_sparse.h"

/** Multiply a tensor with a sparse matrix. mmult(m1,m2) is equivalent to fold(m1,-1,m2,0) even if m1 or m2 are sparse matrices. */
const Tensor<cdouble>
mmult(const Tensor<cdouble> &m1, const Sparse<cdouble> &m2)
{
  return do_mmult(m1, m2);
}

}
