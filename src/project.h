/*
 * gEDA - GNU Electronic Design Automation
 * This file is a part of gerbv.
 *
 *   Copyright (C) 2000-2003 Stefan Petersen (spe@stacken.kth.se)
 *
 * $Id$
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA
 */

#ifndef PROJECT_H
#define PROJECT_H

typedef struct project_list_t {
    int layerno;
    char *filename;
    int rgb[3];
    char inverted;
    struct project_list_t *next;
} project_list_t;

/*
 * Reads a project from a file and returns a linked list describing the project
 */
project_list_t *read_project_file(char *filename);


/*
 * Writes a description of a project to a file 
 * that can be parsed by read_project above
 */
int write_project_file(char *filename, project_list_t *project);


#endif /* PROJECT_H */