# Templates



## Manager 'ossec.conf' file


    header-comments.template

    <ossec_config>
        global.template

        logging.template

        alerts.template

        remote-secure.template

        [remote-syslog.template]

        rootcheck.template

        wodle-openscap.template

        syscheck.template

        global-ar.template

        ar-commands.template

        ar-definitions.template

        localfile-logs*

        localfile-commands.template

        rules.template
    </ossec_config>

## Agent 'ossec.conf' file

    header-comments.template

    <ossec_config>
        <client>
          <server-ip>192.168.10.100</server-ip>
          <config-profile>distribution, distributionVersion</config-profile>

          <!-- Agent buffer options -->
          <disable_buffer>no</disable_buffer>
          <buffer_length>5000</buffer_length>
          <events_per_second>500</events_per_second>
        </client>

        logging.template

        rootcheck.template

        wodle-openscap.template

        syscheck.template

        localfile-logs*

        localfile-commands.template

        <active-response>
          <disabled>no</disabled>
        </active-response>
    </ossec_config>

## Search template
The script looks for the appropriate template depending on the version indicated or detected. If you specify a distribution and its version, the script will initially look for the template of that version, and in case of not finding it, it will go through the folder tree until it reaches the generic version.

Example:
    _GetTemplate "syscheck.manager.template" "centos" "7"_

        1º centos/7/syscheck.manager.template
        2º centos/7/syscheck.template
        3º centos/syscheck.template
        4º generic/syscheck.template
