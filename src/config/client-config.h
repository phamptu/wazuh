/* Copyright (C) 2009 Trend Micro Inc.
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef __CAGENTD_H
#define __CAGENTD_H

/* Configuration structure */
typedef struct _agent {
    int port;
    int m_queue;
    int sock;
    int execdq;
    int rip_id;
    char *lip;
    char **rip; /* remote (server) IP */
    int notify_time;
    int max_time_reconnect_try;
    char *profile;
    int protocol;
    int buffer;
    int buflength;
    int events_persec;
    wlabel_t *labels; /* null-ended label set */
} agent;

#endif /* __CAGENTD_H */
